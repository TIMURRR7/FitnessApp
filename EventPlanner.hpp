#ifndef EVENTPLANNER_HPP
#define EVENTPLANNER_HPP

#include <list>
#include <string>
#include "TrainingSession.hpp"

// ����� EventPlanner: ���������� ���������� � �������������
class EventPlanner {
public:
    // �����������: �������������� ��������������� ������� � ������� �����������
    EventPlanner(const std::list<std::string>& plannedEvents, const std::string& notifyRules);

    // ����������
    ~EventPlanner();

    // �����: ��������� ���������� � ���������� 
    std::string addToSchedule(const TrainingSession& session);

    // �����: ����������� ����������� ��� �������
    void delayNotification(const std::string& eventId, int delayMin);

    // �����: ��������� ����������� �������
    void rescheduleMissed();

private:
    std::list<std::string> plannedEvents; // ��������������� �����/�������
    std::string notifyRules; // ������� �����������
};

#endif
