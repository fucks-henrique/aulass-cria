int LED=2;
int BOTAO=3;
int estado_botao = 0 ;
int VAR = 0;
int VAR2 = 0;

void setup ()
{
  pinMode(led, OUTPUT);
  pinMode(BOTAO, INPUT);
          }
          void Loop()
          {
            VAR= digitalRead(BOTAO);
            IF(var ==1 && VAR2 == 0)
            {
              estado_botao = 1 - estado_botao;
              delay(20);
              ]
                VAR2=VAR;
              if(estado_botao== 1){
                digitalWrite(LED, 1);
              }
              else
              {
                digitalWrite(LED, O);
              }
            }
