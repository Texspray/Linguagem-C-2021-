#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m_areia, m_ferro, s_cimento, s_cal, m_pedra, m_tijolos, diaria_pedreiro, dias, cussto;
    scanf("%f%f%f%f%f%f%f%f", &m_areia, &m_ferro, &s_cimento, &s_cal, &m_pedra, &m_tijolos, &diaria_pedreiro, &dias );
    cussto = m_areia+m_ferro+s_cimento+s_cal+m_pedra+m_tijolos+(diaria_pedreiro*dias);

    printf("O custo da obra vai ser de %f", cussto);
    return 0;
}
