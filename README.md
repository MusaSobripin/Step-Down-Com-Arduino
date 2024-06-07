# Projeto de Física II: Step Down Controlado com Arduino no Tinkercad

## Descrição do Projeto

Este projeto foi desenvolvido como parte da disciplina de Física II e tem como objetivo criar um conversor DC-DC Step Down (ou buck converter) controlado por um microcontrolador Arduino, utilizando a plataforma de simulação Tinkercad. O conversor Step Down é responsável por reduzir a tensão de entrada para uma tensão de saída mais baixa, mantendo a eficiência energética.

## Objetivos

- Desenvolver um conversor Step Down utilizando componentes eletrônicos simulados no Tinkercad.
- Controlar a saída do conversor utilizando um Arduino.
- Implementar um sistema de controle que permita ajustar a tensão de saída do conversor.

## Componentes Utilizados

- **Arduino Uno**: Microcontrolador que será utilizado para controlar o conversor.
- **Transistor MOSFET**: Atua como chave eletrônica no conversor.
- **Transistor NPN(BJT)**: Atua como chave eletrônica no conversor.
- **Indutor (100mH)**: Armazena e libera energia para suavizar a corrente de saída.
- **Capacitores**: Filtram a tensão de saída para reduzir ripple.
- **Diodo**: Permite a passagem de corrente em uma única direção, melhorando a eficiência.
- **Resistores (10k, 1k)**: Usados para ajuste e proteção do circuito.
- **Fonte de Alimentação DC (Bateria 9v)**: Fornece a tensão de entrada para o conversor.

## Circuito
### Diagrama do Circuito

> ![Diagrama do Circuito](/Circuito_Digital.png)

### Passos do Funcionamento

1. **Transistor Ligado (PWM Alto)**: 
- O transistor conduz a corrente da fonte de alimentação para o indutor.
- O indutor armazena energia na forma de campo magnético.
- Parte da corrente flui para a carga através do capacitor.

2. **Transistor Desligado (PWM Baixo)**: 
- O transistor interrompe a corrente da fonte de alimentação.
- O indutor libera a energia armazenada, mantendo a corrente fluindo através do diodo para a carga e o capacitor.
- O capacitor ajuda a manter a tensão de saída constante durante esta fase.

3. **Ciclo Repetido**: 
- O ciclo de ligar e desligar o transistor continua rapidamente, controlado pela largura do pulso do sinal PWM.
- Ajustando a razão cíclica (duty cycle) do PWM, a tensão média de saída pode ser controlada.


## Código Arduino
## Simulação no Tinkercad

Para simular este projeto no Tinkercad:

1. Acesse o [Tinkercad](https://www.tinkercad.com/things/jjUOCN3jrHF-grand-esboo/editel?sharecode=zxqb6WLQkqMb8zrbpSr2WBJduSnd5iK9LYmfXquICK4).
2. Crie uma nova simulação de circuito.
3. Adicione os componentes listados e monte o circuito conforme o diagrama fornecido.
4. Copie e cole o código Arduino no editor de código do Tinkercad.
5. Inicie a simulação e ajuste o potenciômetro para observar a mudança na tensão de saída.

## Resultados Esperados

Ao finalizar a montagem e simulação do circuito, espera-se obter:

- Uma tensão de saída controlada e ajustável, menor que a tensão de entrada.
- Funcionamento eficiente do conversor Step Down, com baixo ripple na tensão de saída.
- Capacidade de controlar a tensão de saída através do Arduino, ajustando o ciclo de trabalho do PWM.

## Conclusão

Este projeto demonstrou a viabilidade de utilizar um Arduino para controlar um conversor Step Down, proporcionando uma maneira prática e eficiente de regular tensões em circuitos eletrônicos. A utilização do Tinkercad como ferramenta de simulação permitiu testar e ajustar o circuito de forma virtual antes da implementação física.

## Referências

- DC-DC Buck Converter with Arduino Uno ([link](https://samiralavi.github.io/blog/buck_coverter/buck_converter_arduino/))
- DC-DC Buck Converter Circuit - How to Step Down DC Voltage ([link](https://circuitdigest.com/microcontroller-projects/arduino-dc-dc-buck-converter-circuit))
- DIY Buck Converter || How to step down DC voltage efficiently ([link](https://www.youtube.com/watch?v=m8rK9gU30v4))

## Autores

- 
- Nome do Estudante 2
- Nome do Professor Orientador

## Licença

Este projeto está licenciado sob a Licença MIT - veja o arquivo [LICENSE](LICENSE) para mais detalhes.
