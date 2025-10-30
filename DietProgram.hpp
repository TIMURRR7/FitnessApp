#ifndef DIETPROGRAM_HPP
#define DIETPROGRAM_HPP

#include <string>
#include <list>

// ����� DietProgram: ���� �������
class DietProgram {
public:
    // �����������: �������������� ���� �������
    DietProgram(const std::string& id, const std::string& ownerUserId, const std::string& planDate,
        const std::list<std::string>& dailyMeals, const std::string& dailyTargets);

    // ����������
    ~DietProgram();

    // �����: ��������� ���� �� ��������� ���� (��������)
    void updateForWeightShift(double weightDelta);

    // �����: ������������ ��������� ��������� �� ���� (��������)
    std::string calcDailySummary() const;

    // �����: �������� ����� � ����� (��������)
    void swapDish(const std::string& mealTime, const std::string& replacement);

private:
    std::string id; // �������������
    std::string ownerUserId; // ��������
    std::string planDate; // ���� �����
    std::list<std::string> dailyMeals; // ������ ����
    std::string dailyTargets; // ���� �� ����������
};

#endif
