#include "Activity.hpp"
#include <algorithm>

// �����������: �������������� ��� ����
Activity::Activity(const std::string& id, const std::string& title, const std::set<MuscleGroup>& targetedMuscles,
    ActivityType category, const std::set<ProfileManager::Equipment>& requiredEquipment, ProfileManager::Level complexity,
    const std::string& description)
    : id(id), title(title), targetedMuscles(targetedMuscles), category(category),
    requiredEquipment(requiredEquipment), complexity(complexity), description(description) {}

// ����������
Activity::~Activity() {}

// �����: ��������� ������� ������������ � ������������
bool Activity::matchesUser(const ProfileManager& user) const {
    return std::includes(user.getAvailableEquipment().begin(), user.getAvailableEquipment().end(),
        requiredEquipment.begin(), requiredEquipment.end());
}

// �����: ���������� ������������� ������ ������������ (��������)
int Activity::getDurationEstimate() const {
    return 10; // ��������� ��������
}