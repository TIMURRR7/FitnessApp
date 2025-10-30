#ifndef TRAININGSESSION_HPP
#define TRAININGSESSION_HPP

#include <string>
#include <list>
#include "ProfileManager.hpp" 

// ����� TrainingSession: ������������� ������
class TrainingSession {
public:
    enum class WorkoutStatus { PLANNED, COMPLETED }; // ������ ������

    // �����������: �������������� ������
    TrainingSession(const std::string& id, const std::string& scheduledDate, int estDurationMin,
        const std::string& sessionName, const std::list<std::string>& exerciseBlocks, // ��������
        WorkoutStatus currentStatus);

    // ����������: ����������� �������
    ~TrainingSession();

    // �����: �������� ������
    void beginSession();

    // �����: ��������� ������ � ����������� ����������� 
    void finishSession(const std::string& results);

    // �����: ��������� ���� ������
    void shiftDate(const std::string& newScheduledDate);

    // �����: ������������ �������� �������
    int calcBurnedCalories(const ProfileManager& user) const;

private:
    std::string id; // �������������
    std::string scheduledDate; // ��������������� ����
    int estDurationMin; // ������ ������������ � �������
    std::string sessionName; // �������� ������
    std::list<std::string> exerciseBlocks; // ����� ���������� (���������)
    WorkoutStatus currentStatus; // ������� ������
};

#endif
