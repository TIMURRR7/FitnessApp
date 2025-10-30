#include "FitnessDatabase.hpp"

// �����������: ������������� ���� ���������� �� ���������
FitnessDatabase::FitnessDatabase() : updateTimestamp("2025-10-21") {}

// ����������
FitnessDatabase::~FitnessDatabase() {}

// �����: ����� �� �������� (��������)
std::list<Activity> FitnessDatabase::findByName(const std::string& searchQuery) const {
    std::list<Activity> result;
    return result;
}

// �����: ���������� (��������)
std::list<Activity> FitnessDatabase::filterActivities(ProfileManager::Goal targetGoal, const std::set<ProfileManager::Equipment>& equip, ProfileManager::Level lvl) const {
    std::list<Activity> result;
    // ����������
    return result;
}

// �����: ��������� ����������
void FitnessDatabase::addActivity(const Activity& newActivity) {
    activities.push_back(newActivity);
}

// �����: ��������� ����������
void FitnessDatabase::updateLibrary(const std::list<Activity>& newActivities) {
    activities = newActivities;
}
