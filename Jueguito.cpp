#include <iostream>

int main() {
  int Decision;
  int Fin = 0;
  using std::cin;
  using std::cout;
  using std::endl;
  do{
  cout << "Bienvenido a la historia de fantasia\n";
  cout << "Empezando la historia... \n\n\n";
  // Escena 1 --- INICIO ---
  cout << "Te encuentras en un bosque desconocido. Observas que hay 3 caminos "
          "enfrente tuyo cual decides tomar?\n\n 1. Izquierda  2. Derecha  3. "
          "Esperar\n";
  cin >> Decision;
  // Escena 2 -----  IZQUIERDA ----
  if (Decision == 1) {
    cout << "No se ve nada mas que mas arboles que haces? \n\n 1.Continuar  2. "
            "Regresar\n";
    cin >> Decision;
    // Escena 2.1 --- CONTINUAR----
    if (Decision == 1) {
      cout << "Continuas el camino y logras ver un lago, una cabana y a lo "
              "lejos se pueden escuchar lobos\n\n A donde decides ir?\n1. Lago "
              "2. Cabana 3. Esperar\n";
      cin >> Decision;
      // Escena 2.1.1 ---- LAGO -----
      if (Decision == 1) {
        cout
            << "Caminas hacia el lago. notas que el lago tiene agua cristalina "
               "y no es tan profundo.\n Ya esta anocheciendo. \n Que quieres "
               "hacer? \n\n 1.  Ir a la cabana 2. Entrar al lago 3. Esperar\n";
        cin >> Decision;
        // Escena 2.1.1.1---- Cabana ----
        if (Decision == 1) {
          cout << "Vas caminando hacia la cabana pero escuchas los aullidos de "
                  "los lobos cada vez mas cerca que haces?\n 1. Corres 2. "
                  "Gritas 3. Te escondes\n";
          cin >> Decision;
          // Escena 2.1.1.1.1 --- Correr ----
          if (Decision == 1) {
            cout
                << "Corres desesperadamente hacia la cabana. Escuchas ladridos "
                   "y aullidos de los lobos que te empezaron a perseguir. De "
                   "un momento a otro logras ver la cabana enfrente tuyo pero "
                   "te trompiezas con una rama del bosque y te agarran los "
                   "lobos.\n Has muerto a causa de los lobos\n";
                cout << "\nQuieres volver a empezar?\n   0.Si    1. No\n";
            cin >> Fin;
              
          }
          // Escena 2.1.1.1.2 --- Gritar ----
          else if (Decision == 2) {
            cout << "Al gritar los lobos te escuchan y van directamente hacia "
                    "ti, los lobos poco a poco se acercan a ti pero se escucha "
                    "un DISPARO \n-- BOOM --\n Lo que creiste que era un "
                    "disparo en realidad era una explosion, explotandote a ti "
                    "y a los lobos juntos. \n\n Has muerto a causa de la "
                    "explosion.";
          }
          // Escena 2.1.1.3---- Esconderte ----
          else if (Decision == 3) {
            cout << "Te intentas esconder en unos arbustos pero el olfato de "
                    "los lobos es mucho mejor de lo que esperabas y te "
                    "encuentran \n\n Has muerto a causa de los lobos.\n";
          } else
            cout << "No existe tal opcion";
              cout << "\nQuieres volver a empezar?\n   0.Si    1. No\n";
            cin >> Fin;
              
        }
        // Escena 2.1.1.2---- Entrar al Lago ------
        else if (Decision == 2) {
          cout << "Decides entrar al lago el agua estaba fria pero era refrescante, te quedas unos minutos dentro pero un pejelagarto te encuentra y te logra alcanzar. \n\n Te convertiste en comida de cococdrilo";
              cout << "\nQuieres volver a empezar?\n   0.Si    1. No\n";
            cin >> Fin;
              
        }
        // Escena 2.1.1.3--- NADA -----
        else if (Decision == 3) {
          cout << "Esperas y esperas los lobos se acercaron demasiado al esperar tanto y te lograron alcanzar, estaban hambrientos.\n\n Te convertiste en comida de lobo";
              cout << "\nQuieres volver a empezar?\n   0.Si    1. No\n";
            cin >> Fin;
              
        } else{
          cout << "No existe tal opcion";
              cout << "\nQuieres volver a empezar?\n   0.Si    1. No\n";
            cin >> Fin;
              
            }
      }
      // Escena 2.1.2-------- Cabana ----------- 
      else if (Decision == 2) {
        cout << "Vas a la cabana pero ves que tiene luces encendidas dentro que quieres hacer?\n 1. Entrar 2. Regresar";
        cin >> Decision;
        // Escena 2.1.2.1---- Entrar ------
        if (Decision == 1){
          cout << "Tocas la puerta y alguien te abre la puerta, te habla pero tu no entiendes su idioma, al intentar hablarle de vuelta el se da cuenta que no eres de ahi y empieza a hablar con senas y te dice que es un lugar tranquilo y seguro.\n Que haces?\n1. Decirle sobre los lobos  2. Nada";
          cin >>Decision;
          // Escena 2.1.2.1.1----- Decirle sobre los lobos ------
          if (Decision == 1){
            cout << "Intentas decirle sobre los lobos pero el cree que estas jugando, pasa un tiempo y llegan los lobos ellos rompen las ventanas y entran devorando a ambos. \n Has muerto por los lobos\n";
                cout << "\nQuieres volver a empezar?\n   0.Si    1. No\n";
            cin >> Fin;
              
          }
            // Escena 2.1.2.1.2----- NADA ------
          else if (Decision == 2){
            cout << "No haces nada y los lobos llegan rompiendo muros y ventanas y los encuentran\n Has muerto por los lobos\n";
                cout << "\nQuieres volver a empezar?\n   0.Si    1. No\n";
            cin >> Fin;
              
          }
          else {
            cout << "No existe la opcion";
                cout << "\nQuieres volver a empezar?\n   0.Si    1. No\n";
            cin >> Fin;
              
          }
        }
        // Escena 2.1.2.2 ----------- Regresar ----------
        else if (Decision == 2){
          cout <<"Regresas por donde viniste pero en el camino te encuentras a los lobos. Sin armas ni fuerza te logran alcanzar\n\n Has muerto por los lobos\n";
              cout << "\nQuieres volver a empezar?\n   0.Si    1. No\n";
            cin >> Fin;
              
        }
      }
      // Escena 2.1.2.3-------Nada------------
      else if (Decision == 3) {
        cout << "Decides no hacer nada. \nPasan minutos y los lobos estaban mas cerca de lo que esperabas. \n Has muerto por los lobos";
        cout << "\nQuieres volver a empezar?\n   0.Si    1. No\n";
            cin >> Fin;
      } else
        cout << "No existe tal opcion";
    }
    // Escena 2.2--- Regresar ---
    else if (Decision == 2) {
      cout << "Decides regresar por el camino donde estabas pero al intentar volver ves que no es lo mismo de antes.\n Estas perdido y esta anocheciendo que quieres hacer?\n 1. Esperar \n 2. Seguir \n 3. Intentar hacer una fogata\n";
      cin >> Decision;
      // Escena 2.2.1 ----- Esperar  -----
      if (Decision == 1){
        cout << "Decides no hacer nada escuchas lobos a lo lejos y ya es de noche. \nAl no hacer nada durante horas los lobos te encuentran y te comen\n\n Has muerto por los lobos";
      }
      // Escena 2.2.2---- Seguir ----
      else if (Decision == 2){
        cout << "Sigues caminando por el bosque pero no ves nada mas que arboles, el hambre y la sed te estan empezando a afectar.\n A lo lejos puedes ver la refleccion de la luna \nQue quieres hacer? \n 1. Ir hacia la luz    2. Nada\n";
        // Escena 2.2.2.1--- Ir hacia la luz ----
        cin >> Decision;
        if (Decision == 1){
          cout << "Vas hacia la luz y cuando te encuentras en ella notas que empiezas a decender debajo de la tierra. \nEran arenas movedisas.\n Mueres asfixiado";
        }
          //Escena 2.2.2.2--- Nada ----
        else if(Decision == 2){
          cout << "No haces nada pero la falta de agua y comida hace que te desmayes. Sin fuerza para seguir te quedas tirado\n\n Mueres por deshidratacion";
              cout << "\nQuieres volver a empezar?\n   0.Si    1. No\n";
            cin >> Fin;
              
        }
      }
        //Escena 2.2.3----Intentar hacer una Fogata -----
      else if(Decision == 3){
        cout <<" Intentas hacer una fogata pero estas demasiado cansado, logras hacer una pequena chispa y se genera un poco de fuego pero te desmayas por la falta de agua y comida. \n Mueres por un incendio forestal que creaste.";
      }
    } else
      cout << "No existe tal opcion";
  }
  // Escena 3 ----- DERECHA -------
  else if (Decision == 2) {
    cout << "Tomas el camino de la derecha caminas durante al menos 2 horas "
            "siguiendo el camino. \n Logras ver una ciudad a lo lejos. \n Que "
            "quieres hacer? \n 1. Ir hacia la ciudad 2. Descansar 3. Nada\n";
    cin >> Decision;
    //Escena 3.1 --- Ir a la ciudad -----
    if (Decision == 1)
    {
      cout << "Vas hacia la ciudad pero en el camino te encuentras con un grupo de personas que haces?\n\n1. Intentas hablar con ellos 2. Los sigues por detras 3. Sigues tu camino hacia la ciudad";
        cin >> Decision;
      //Escena  3.1.1--- Intentar hablar con ellos -----
      if (Decision == 1)
      {
        cout << "Intentas hablar con ellos pero no hablan tu idioma y creen que los estas amenazando, ante tal amenaza ellos se asustan y sacan sus armas atacandote y matandote\n\n Has muerto a manos de personas en panico";
      }
        //Escena 3.1.2----- Seguir por detras ----
      else if(Decision == 2)
      {
       cout << "Sigues al grupo de personas por detras pero pisas una rama haciendo que se alerten que haces?\n1. Te muestras 2. Sigues escondido\n";
        cin >> Decision;
        //Escena 3.1.2.1---- Te muestras ----
        if (Decision == 1)
        {
          cout << "Te muestras e intentas hablar con ellos pero ellos lo toman como amenaza y terminan atacandote y matandote\n\n Has muerto a manos de personas en panico";
        }
        //Escena 3.1.2.2--- Sigues escondido ----
        else if(Decision == 2){
          cout << "Te escondes pero en el camino haces ruido en un arbusto, el grupo de personas asustados disparan a los arbustos\n\n Los disparos te alcanzan y mueres.\n";
        }
        else if(Decision == 3){
          cout << "Seguiste tu camino a la ciudad pero te topas con un tigre\n que haces?\n 1. Corres   2. Peleas\n";
          cin >> Decision;
          if (Decision == 1){
            cout << "Intentaste correr de un tigre pero eso lo hizo activar sus instintos de cazador y te alcanzo\n\n Moriste por el tigre";
                cout << "\nQuieres volver a empezar?\n   0.Si    1. No\n";
            cin >> Fin;
              
          }
          else if(Decision == 2){
            cout << "Porque intentas pelear con un tigre, le logras dar un golpe en la nariz pero el tigre se enoja y te ataca.\n\n Moriste por el tigre";
                cout << "\nQuieres volver a empezar?\n   0.Si    1. No\n";
            cin >> Fin;
              
          }
          else{
            cout << "Introduce un numero de verdad. ";
                cout << "\nQuieres volver a empezar?\n   0.Si    1. No\n";
            cin >> Fin;
              
          }

        }
        else{
          cout << "Opcion no valida";
              cout << "\nQuieres volver a empezar?\n   0.Si    1. No\n";
            cin >> Fin;
              
        }
      }
    }
      // Escena 3.2----Descansar ---------
    else if(Decision == 2){
      cout << "Decides descansar en medio del camino, pasa el tiempo y recuperas tu fuerza pero el hambre y sed te empieza a afectar. \nEsta anocheciendo que quieres hacer? \n1. Ir a la ciudad 2. Dormir";
      cin >> Decision;
      // Escena 3.2.1--- Ir a la ciudad ---
      if (Decision == 1)
      {
        cout << "Intentas ir a la ciudad en medio de la noche sin vision caes en un pozo.\nLastimado y solo en un pozo los dias pasan y nadie te encuentra. \n Mueres por falta de agua.";
      }
        //Escena 3.2.2--- Dormir ----
      else if (Decision == 2)
      {
       cout << "Duermes toda la noche. Al despertar descubres que no te paso nada pero cada vez tienes mas sed y hambre. Que quieres hacer?\n 1. Ir a la ciudad 2. Nada\n"; 
        // Escena 3.2.2.1--- IR a la ciudad ----
        cin >> Decision;
        if (Decision == 1){
          cout << "Vas de camino hacia la ciudad pero el hambre te dejo sin fuerzas y te desmayas en medio camino. \nCuando despiertas te das cuenta que te encuentras en una casa y hay personas al lado tuyo cuidandote, intentas hablar con ellos pero ellos no entienden tu idioma entonces te intentas comunicar por senas y te entienden.\n Pasan los dias y decidiste ayudarlos con las tareas domesticas y ellos a cambio te dan una vivienda y te ensenan el idioma.\n Felicidades aprendiste a hablar su idioma. Despues de muchos anos eres una persona de la ciudad y vives felizmente con tu esposa y 2 hijos.\n\n Felicidades sobrevisiste al juego";
        }
        //Escena 3.2.2.2--- Nada ---
        else if (Decision == 2){
          cout << "Decides no hacer nada y te desmayas por falta de agua y comida.\nAl no tener ya fuerzas te quedas en el suelo y mueres\n\n Has muerto por inanicion";
              cout << "\nQuieres volver a empezar?\n   0.Si    1. No\n";
            cin >> Fin;
              
        }
      }
    }
  }
  // Escena 4 ---- NADA ------
  else if (Decision == 3) {
    cout << "Decides esperar en el lugar donde despertaste, empieza a "
            "anocheser, y escuchas unos lobos a lo lejos y tienes sed.\nQue "
            "quieres hacer?\n\n 1. Nada 2. Esconderse 3. Ir hacia los sonidos de lobos\n";
    cin >> Decision;
    //Escena 4.1 -----Nada -----
    if (Decision == 1){
      cout << "Escuchas a los lobos cada vez mas cerca pero no haces nada, cada vez tienes mas hambre y sed \n Que quieres hacer? \n\n 1. Nada 2. Esconderse 3. Iniciar una fogata\n";
      cin >> Decision;
      //Escena 4.1.1--Nada ----
      if (Decision == 1){
        cout << "Decides no hacer nada y los lobos te encuentran, estaban hambrientos.\n\n Has muerto a causa de los lobos.";
            cout << "\nQuieres volver a empezar?\n   0.Si    1. No\n";
            cin >> Fin;
              
      }
      // Escena 4.1.2-----Esconderse -------
      else if (Decision == 2) {
        cout << "Te intentas esconder pero los lobos tienen un buen olfato haciendo que te encuentren. \n\n Has muerto a causa de los lobos.";
            cout << "\nQuieres volver a empezar?\n   0.Si    1. No\n";
            cin >> Fin;
              
      }
      // Escena 4.1.3--- Iniciar una fogata ----
      else if (Decision == 3) {
        cout << "Intentas hacer una fogata pero no tienes las herramientas ni los materiales para hacer un fuego a tiempo, los lobos estaban mas cerca de lo que esperabas y te encuentran \n\n Mueres a causa de los lobos.";
            cout << "\nQuieres volver a empezar?\n   0.Si    1. No\n";
            cin >> Fin;
              
      }
      else
      cout << "No existe tal opcion";
          cout << "\nQuieres volver a empezar?\n   0.Si    1. No\n";
            cin >> Fin;
              
    }
    // Escena4.2 ------Esconderte -----
    else if (Decision == 2) {
      cout << "Decides esconderte, pasa el tiempo y aun se escuchan los lobos cada vez mas cerca.\nQue quieres hacer?\n 1. Seguir escondido 2. Salir\n";
      cin >> Decision;
      // Escena 4.2.1---- Seguir escondido ------
      if (Decision == 1){
        cout << "Decides seguir escondido, pasa el tiempo y los lobos se acercan\n Piensas que estas a salvo pero un lobo te encontro y llamo a los demas \n Has muerto por los lobos";
            cout << "\nQuieres volver a empezar?\n   0.Si    1. No\n";
            cin >> Fin;
              
      }
      // Escena 4.2.2------ Salir ---------
      else if(Decision == 2){
        cout << "Decides salir, pero para tu mala suerte un lobo estaba enfrente tuyo y te encontro\n Has muerto pos los lobos";
            cout << "\nQuieres volver a empezar?\n   0.Si    1. No\n";
            cin >> Fin;
              
      }
      else{
        cout << "No existe tal opcion";
            cout << "\nQuieres volver a empezar?\n   0.Si    1. No\n";
            cin >> Fin;
      }
    }
    // Escena 4.3------- Ir a los lobos ---------
    else if (Decision == 3) {
      cout <<" Decides ir hacia los sonidos y te encuentras con una manada de lobos hambrientos \n Has muerto por los lobos\n";
      cout << "\nQuieres volver a empezar?\n   0.Si    1. No\n";
            cin >> Fin;
    } else
      cout << "No existe tal opcion";
  } else {
    cout << "Porfavor pon un numero adecuado\n\n";
  }
  }while(Fin == 0);
}