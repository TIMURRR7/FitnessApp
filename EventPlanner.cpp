#include "EventPlanner.hpp"

// �����������: �������������� ����
EventPlanner::EventPlanner(const std::list<std::string>& plannedEvents, const std::string& notifyRules)
    : plannedEvents(plannedEvents), notifyRules(notifyRules) {}

// ����������
EventPlanner::~EventPlanner() {}

// �����: ��������� � ���������� (��������)
std::string EventPlanner::addToSchedule(const TrainingSession& session) {
    return "Scheduled"; // ������
}

// �����: ����������� ����������� (��������)
void EventPlanner::delayNotification(const std::string& eventId, int delayMin) {
    // ��������
}

// �����: ��������� ����������� ������� (��������)
void EventPlanner::rescheduleMissed() {
    // �������
}
