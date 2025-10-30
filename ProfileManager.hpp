#ifndef PROFILEMANAGER_HPP
#define PROFILEMANAGER_HPP

#include <string>
#include <set>
#include <list>

// ����� ProfileManager: ��������� �������� ������������
class ProfileManager {
public:
    // ������������ ��� ����, �����, �������, ���� ������ � ������������
    enum class Gender { MALE, FEMALE}; // ��� ������������
    enum class Goal { LOSE_WEIGHT, GAIN_MASS, HEALTH }; // ���� (���������, ����� �����, ��������)
    enum class Level { BEGINNER, INTERMEDIATE, ADVANCED }; // ������� ����������
    enum class Weekday { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY }; // ��� ������
    enum class Equipment { DUMBBELLS, BARBELL, BENCH }; // ������������

    // �������� < ��� ��������� Equipment � std::includes
    friend bool operator<(Equipment lhs, Equipment rhs) {
        return static_cast<int>(lhs) < static_cast<int>(rhs);
    }

    // �����������: �������������� ������� ������������
    ProfileManager(const std::string& id, const std::string& username, int age, Gender gender, int heightCm,
        double currentWeightKg, Goal targetGoal, Level fitnessLevel,
        const std::list<Weekday>& workoutDaysPref, const std::set<Equipment>& availableEquipment,
        bool alertsEnabled);

    // ����������: ����������� ������� 
    ~ProfileManager();

    // �����: ��������� ��� ������������
    void changeWeight(double newWeight);

    // �����: �������� ���� ������������
    void updateGoal(Goal newGoal);

    // �����: ������������ ������ ����� ���� (BMI)
    double calculateBMI() const;

    // Getter: ���������� ��������� ������������
    const std::set<Equipment>& getAvailableEquipment() const { return availableEquipment; }

private:
    std::string id; // ���������� �������������
    std::string username; // ��� ������������
    int age; // �������
    Gender gender; // ���
    int heightCm; // ���� � ��
    double currentWeightKg; // ������� ��� � ��
    Goal targetGoal; // ����
    Level fitnessLevel; // ������� ����������
    std::list<Weekday> workoutDaysPref; // �������������� ��� ����������
    std::set<Equipment> availableEquipment; // ��������� ������������
    bool alertsEnabled; // �������� �� �����������
};

#endif#pragma once
