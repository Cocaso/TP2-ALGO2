#ifndef CASILLERO
#define CASILLERO


enum Terreno {
    TIERRA,
    AGUA,
    AIRE
};

enum Artilleria {
    VACIO,
    SOLDADO,
    AVION,
    BARCO,
    MINA
};

class Casillero {
private:
    Terreno terreno;
    bool toxico;
    int jugador;
    int numDeTropa;
    Artilleria artilleria;
    int turnosInactivo;
    
public:
    /*
    Pre:~~
    Pos: Construye un casillero vacío con AIRE
    */
    Casillero();

    /*
    Pre:~~
    Pos: Bob el destructor
    */
    ~Casillero();

    /*
    Pre:~~
    Pos: Cambia el terreno a TIERRA o AGUA según el template del mapa
    */
    void cambiarTerreno(int terreno);

    /*
    Pre:~~
    Pos: Desactiva la casilla por la cantidad de turnos correspondientes y vacía el casillero
    */
    void desactivarCasilla(int cantidadTurnosCasillaInactiva);

    /*
    Pre:
    Pos: Disminuye 1 turno de inactividad , y ademas devuelve true si llego a 0 la cantidad inactiva
    */
    bool disminuirTurnosInactivo();

    /*
    Pre:~~
    Pos: Coloca la artillería indicada (sirve para cambiar a VACIO)
    */
    void vaciarCasillero();

    /*
    Pre: Recibe numero jugador y tipo de artilleria
    Pos: Coloca ambos datos en el struct
    */
    void ponerArtilleria(Artilleria artilleria, int numJugador);

    /*
    Pre: Recibe numero jugador, tipo de artilleria y numero de soldado
    Pos: Coloca todos los datos en el struct (solo para SOLDADO)
    */
    void ponerArtilleria(Artilleria artilleria, int numJugador, int numTropa);

    /*
    Pre: Recibe el tipo de artilleria que se quiere colocar
    Pos: Devuelve true si se puede colocar o false y cout si no se puede
    */
    bool comprobarTerreno(Artilleria unidad);
    
    /*
    Pre: Recibe un casillero
    Pos: Devuelve si la casilla esta activa o inactiva
    */
    bool comprobarEstado();
    /*
    Pre: ~~
    Pos: Devuelve el tipo de artilleria en terreno
    */
    Artilleria devolverArtilleria();

    /*
    Pre: ~~
    Pos: Devuelve el numero de turnos inactivos que le quedan al casillero
    */
    int devolverTurnosInactivos();

    /*
    Pre: ~~
    Pos: Devuelve, en caso de que haya una artilleria, a que jugador pertenece
    */
    int devolverNroJugador();

    /*
    Pre: ~~
    Pos: Devuelve true si el casillero es toxico
    */
    bool esToxico();

    /*
    Pre: ~~
    Pos: Establece el casillero como toxico o no toxico
    */
    void setToxico(bool toxico);

    /*
    Pre: ~~
    Pos: Devuelve, en caso de que haya una tropa, que numero de tropa es
    */
    int devolverNroTropa();

    /*
    Pre: ~~
    Pos: Devuelve , en caso de que haya un soldado , que numero de soldado es
    */
    Terreno devolverTerreno();
};
#endif