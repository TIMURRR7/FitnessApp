#include <iostream>
#include <vector>
#include <windows.h>
#include <list>
#include <set>
#include "ProfileManager.hpp"
#include "Activity.hpp"
#include "FitnessDatabase.hpp"
#include "TrainingSession.hpp"
#include "TrainingSchedule.hpp"
#include "DietProgram.hpp"
#include "MealFormula.hpp"
#include "EventPlanner.hpp"
#include "ProgressTracker.hpp"
#include "FunMascot.hpp"

int main() {
    SetConsoleOutputCP(1251);
    // 1. ����������� ������������� ��������
    std::cout << "���� 1: ����������� �������������\n";
    std::list<ProfileManager::Weekday> days;
    std::set<ProfileManager::Equipment> equip = { ProfileManager::Equipment::DUMBBELLS };
    ProfileManager staticUser("1", "user1", 25, ProfileManager::Gender::MALE, 190, 90.0, ProfileManager::Goal::LOSE_WEIGHT, ProfileManager::Level::BEGINNER, days, equip, true);
    std::cout << "  ����������� ProfileManager ������, BMI: " << staticUser.calculateBMI() << " (��������� ~24.93)\n";

    // 2. ������������ ������������� � new/delete
    std::cout << "\n���� 2: ������������ �������������\n";
    std::set<Activity::MuscleGroup> muscles = { Activity::MuscleGroup::LEGS };
    std::set<ProfileManager::Equipment> reqEquip = { ProfileManager::Equipment::DUMBBELLS }; // ���������� ProfileManager::Equipment
    Activity* dynamicActivity = new Activity("act1", "����������", muscles, Activity::ActivityType::STRENGTH, reqEquip, ProfileManager::Level::BEGINNER, "�������� �������");
    std::cout << "  ������������ Activity ������, ������ ������������: " << dynamicActivity->getDurationEstimate() << " (��������� 10)\n";
    std::cout << "  �������� �� ���������� ������������: " << dynamicActivity->matchesUser(staticUser) << " (��������� 1)\n";
    delete dynamicActivity; // ������������ ������
    std::cout << "  ������������ ������ �����\n";

    // 3. ������ � ��������
    std::cout << "\n���� 3: ������ � ��������\n";
    FitnessDatabase db;
    FitnessDatabase& dbRef = db; // ������ �� ������
    Activity act("act2", "���������", muscles, Activity::ActivityType::STRENGTH, reqEquip, ProfileManager::Level::INTERMEDIATE, "��������");
    dbRef.addActivity(act);
    std::cout << "  ������ �� FitnessDatabase: ���������� ���������\n";

    // 4. ������ � �����������
    std::cout << "\n���� 4: ������ � �����������\n";
    std::list<std::string> events;
    EventPlanner reminderSystem(events, "���������� �����������");
    EventPlanner* reminderPtr = &reminderSystem;
    std::list<std::string> blocks = { "���� 1", "���� 2" };
    TrainingSession session("sess1", "2025-10-27", 60, "����������", blocks, TrainingSession::WorkoutStatus::PLANNED);
    reminderPtr->addToSchedule(session);
    std::cout << "  ��������� �� EventPlanner: ���������� ���������\n";
    reminderPtr->delayNotification("sess1", 10);
    std::cout << "  ��������� �� EventPlanner: ����������� ��������\n";

    // 5. ������������ ������ ��������
    std::cout << "\n���� 5: ������������ ������ ��������\n";
    std::list<TrainingSession> sessions = { session };
    TrainingSchedule* scheduleArray = new TrainingSchedule[2]; // ������������ ������ �� 2 ������
    scheduleArray[0] = TrainingSchedule("plan1", "1", "2025-10-01", "2025-12-31", sessions);
    std::cout << "  ������������ ������ TrainingSchedule: ���� 1 ������\n";
    scheduleArray[1] = TrainingSchedule("plan2", "1", "2026-01-01", "2026-03-31", sessions);
    std::cout << "  ������������ ������ TrainingSchedule: ���� 2 ������\n";
    delete[] scheduleArray;
    std::cout << "  ������������ ������ �����\n";

    // 6. ������ ������������ ��������

    std::cout << "\n���� 6: ������ ������������ ��������\n";
    std::vector<DietProgram*> dietVector;
    std::list<std::string> meal1 = { "������" };
    std::list<std::string> meal2 = { "��������" };
    dietVector.push_back(new DietProgram("diet1", "1", "2025-10-27", meal1, "150 �"));
    dietVector.push_back(new DietProgram("diet2", "1", "2025-10-28", meal2, "150 �"));
    std::cout << "  ������ DietProgram: ��������� " << dietVector.size() << " �������\n";
    for (auto* item : dietVector) {
        std::string summary = item->calcDailySummary();
        std::cout << "  " << summary << "\n";
        delete item;
    }
    std::cout << "  ������ ������������ �������� ������\n";
    return 0;
}
