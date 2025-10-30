#include "ProgressTracker.hpp"

// �����������: �������������� ����
ProgressTracker::ProgressTracker(const std::string& userId, const std::list<std::pair<std::string, double>>& weightLog,
    const std::list<std::string>& sessionHistory, int activeStreak)
    : userId(userId), weightLog(weightLog), sessionHistory(sessionHistory), activeStreak(activeStreak) {}

// ����������
ProgressTracker::~ProgressTracker() {}

// �����: ���������� ����� ������
void ProgressTracker::logSessionOutcome(const std::string& outcome) {
    sessionHistory.push_back(outcome);
}

// �����: ������������ ���������� �����(��������)
double ProgressTracker::calcCompliance(const std::string& interval) const {
    return 90.0; // ������
}
