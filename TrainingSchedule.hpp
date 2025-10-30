#ifndef TRAININGSCHEDULE_HPP
#define TRAININGSCHEDULE_HPP

#include <string>
#include <list>
#include "TrainingSession.hpp"
#include "FitnessDatabase.hpp"
#include "ProfileManager.hpp"

// ����� TrainingSchedule: ���� ���������� �� ������
class TrainingSchedule {
public:
    // Default-�����������: �������������� ������ ����
    TrainingSchedule();

    // �����������: �������������� ���� � �����������
    TrainingSchedule(const std::string& id, const std::string& ownerUserId, const std::string& startDate,
        const std::string& endDate, const std::list<TrainingSession>& sessions);

    // ����������: ����������� �������
    ~TrainingSchedule();

    // �����: ���������� ����� ���� �� ������ ������������ � ����������
    TrainingSchedule createPlan(const ProfileManager& user, const FitnessDatabase& library); // ���������� ����� ����

    // �����: ������������ ���� �� ������ �������� ����� 
    void adjustFromFeedback(const std::string& userFeedback);

    // �����: ���������� ������ ����������� ������
    std::list<TrainingSession> listNextSessions(int count) const;

private:
    std::string id; // ������������� �����
    std::string ownerUserId; // �������� �����
    std::string startDate; // ���� ������ �������
    std::string endDate; // ���� ����� �������
    std::list<TrainingSession> sessions; // ������ ����������
};

#endif
