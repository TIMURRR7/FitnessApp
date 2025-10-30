#include "TrainingSchedule.hpp"

// Default-�����������: �������������� ������� ����������
TrainingSchedule::TrainingSchedule() : id(""), ownerUserId(""), startDate(""), endDate(""), sessions({}) {}

// �����������: �������������� ��� ����
TrainingSchedule::TrainingSchedule(const std::string& id, const std::string& ownerUserId, const std::string& startDate,
    const std::string& endDate, const std::list<TrainingSession>& sessions)
    : id(id), ownerUserId(ownerUserId), startDate(startDate), endDate(endDate), sessions(sessions) {}

// ����������: ������
TrainingSchedule::~TrainingSchedule() {}

// �����: ���������� ���� (��������, ���������� ����� ��������)
TrainingSchedule TrainingSchedule::createPlan(const ProfileManager& user, const FitnessDatabase& library) {
    // ��������� �����
    return *this; // ������
}

// �����: �������������(��������)
void TrainingSchedule::adjustFromFeedback(const std::string& userFeedback) {
    // �������������
}

// �����: ���������� ����������� ������ (��������)
std::list<TrainingSession> TrainingSchedule::listNextSessions(int count) const {
    std::list<TrainingSession> result;
    return result;
}
