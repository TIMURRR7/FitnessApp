#include "DietProgram.hpp"

// �����������: �������������� ��� ����
DietProgram::DietProgram(const std::string& id, const std::string& ownerUserId, const std::string& planDate,
    const std::list<std::string>& dailyMeals, const std::string& dailyTargets)
    : id(id), ownerUserId(ownerUserId), planDate(planDate), dailyMeals(dailyMeals), dailyTargets(dailyTargets) {}

// ����������
DietProgram::~DietProgram() {}

// �����: ��������� �� ���� (��������)
void DietProgram::updateForWeightShift(double weightDelta) {
    // ��������� ������������
}

// �����: ���������� ��������� ��������� (��������)
std::string DietProgram::calcDailySummary() const {
    return "Summary"; // ������
}

// �����: �������� ����� (��������)
void DietProgram::swapDish(const std::string& mealTime, const std::string& replacement) {
    // ������
}
