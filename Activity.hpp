#ifndef ACTIVITY_HPP
#define ACTIVITY_HPP

#include <string>
#include <set>
#include "ProfileManager.hpp" 

// ����� Activity: �������� ����������
class Activity {
public:
    enum class MuscleGroup { CHEST, BACK, LEGS }; // �������� ������ 
    enum class ActivityType { STRENGTH, CARDIO }; // ��� ����������

    // �����������: �������������� ����������
    Activity(const std::string& id, const std::string& title, const std::set<MuscleGroup>& targetedMuscles,
        ActivityType category, const std::set<ProfileManager::Equipment>& requiredEquipment, ProfileManager::Level complexity,
        const std::string& description);

    // ����������
    ~Activity();

    // �����: ���������, �������� �� ���������� ������������
    bool matchesUser(const ProfileManager& user) const;

    // �����: ���������� ������ ������������
    int getDurationEstimate() const;

private:
    std::string id; // �������������
    std::string title; // ��������
    std::set<MuscleGroup> targetedMuscles; // ��������������� �����
    ActivityType category; // ���
    std::set<ProfileManager::Equipment> requiredEquipment; // ����������� ������������
    ProfileManager::Level complexity; // ���������
    std::string description; // ��������
};

#endif