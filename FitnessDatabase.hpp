#ifndef FITNESSDATABASE_HPP
#define FITNESSDATABASE_HPP

#include <list>
#include <string>
#include "Activity.hpp"
#include "ProfileManager.hpp"

// ����� FitnessDatabase: ����������� ����������
class FitnessDatabase {
public:
    // �����������: �������������� ���� 
    FitnessDatabase();

    // ����������: ����������� �������
    ~FitnessDatabase();

    // �����: ����� ���������� �� ��������
    std::list<Activity> findByName(const std::string& searchQuery) const;

    // �����: ���������� ���������� �� ����, ������������ � ������
    std::list<Activity> filterActivities(ProfileManager::Goal targetGoal, const std::set<ProfileManager::Equipment>& equip, ProfileManager::Level lvl) const;

    // �����: ��������� ����� ����������
    void addActivity(const Activity& newActivity);

    // �����: ��������� ��� ���������� ����������
    void updateLibrary(const std::list<Activity>& newActivities);

private:
    std::list<Activity> activities; // ������ ����������
    std::string updateTimestamp; // ���� ���������� ����������
};

#endif
