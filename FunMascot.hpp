#ifndef FUNMASCOT_HPP
#define FUNMASCOT_HPP

#include <string>
#include <set>
#include "ProfileManager.hpp"
#include "ProgressTracker.hpp"
#include "TrainingSession.hpp" 

// ����� FunMascot: ������ ������� (������)
class FunMascot {
public:
    enum class MascotMood { HAPPY, SAD, MOTIVATED }; // ���������� �������

    // �����������: �������������� �������
    FunMascot(const std::string& userId, MascotMood currentMood, int experiencePoints,
        const std::set<std::string>& unlockedSkins);

    // ����������
    ~FunMascot();

    // �����: ������� �� ������ ����������
    std::string respondToSession(TrainingSession::WorkoutStatus outcome) const;

    // �����: ��������� ���� �����
    void addExperience(int points);

    // �����: ���������� ������������� ���������
    std::string generateMotivation(const ProfileManager& user, const ProgressTracker& tracker) const;

private:
    std::string userId; // ������������� ������������
    MascotMood currentMood; // ������� ����������
    int experiencePoints; // ���� �����
    std::set<std::string> unlockedSkins; // ���������������� �����
};

#endif
