#include "TrainingSession.hpp"

// �����������: �������������� ��� ����
TrainingSession::TrainingSession(const std::string& id, const std::string& scheduledDate, int estDurationMin,
    const std::string& sessionName, const std::list<std::string>& exerciseBlocks,
    WorkoutStatus currentStatus)
    : id(id), scheduledDate(scheduledDate), estDurationMin(estDurationMin), sessionName(sessionName),
    exerciseBlocks(exerciseBlocks), currentStatus(currentStatus) {}

// ����������
TrainingSession::~TrainingSession() {}

// �����: �������� ������ (������������� ������ PLANNED)
void TrainingSession::beginSession() {
    currentStatus = WorkoutStatus::PLANNED;
}

// �����: ��������� ������ (������������� ������ COMPLETED)
void TrainingSession::finishSession(const std::string& results) {
    currentStatus = WorkoutStatus::COMPLETED;
}

// �����: ��������� ����
void TrainingSession::shiftDate(const std::string& newScheduledDate) {
    scheduledDate = newScheduledDate;
}

// �����: ������������ ������� (��������)
int TrainingSession::calcBurnedCalories(const ProfileManager& user) const {
    return 500;
}
