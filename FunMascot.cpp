#include "FunMascot.hpp"

// �����������: �������������� ����
FunMascot::FunMascot(const std::string& userId, MascotMood currentMood, int experiencePoints,
    const std::set<std::string>& unlockedSkins)
    : userId(userId), currentMood(currentMood), experiencePoints(experiencePoints), unlockedSkins(unlockedSkins) {}

// ����������
FunMascot::~FunMascot() {}

// �����: ������� �� ������ (��������)
std::string FunMascot::respondToSession(TrainingSession::WorkoutStatus outcome) const {
    return "Good job!"; // ������
}

// �����: ���������� �����
void FunMascot::addExperience(int points) {
    experiencePoints += points;
}

// �����: ���������� ��������� (��������)
std::string FunMascot::generateMotivation(const ProfileManager& user, const ProgressTracker& tracker) const {
    return "Keep going!"; // ������
}
