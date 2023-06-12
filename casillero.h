#ifndef CASILLERO
#define CASILLERO


enum Terreno {
    TIERRA,
    AGUA,
    AIRE
};

enum Artilleria {
    VACIO,
    BARCO,          //tiene municion, si se le termina se inhabilita (inutil)
    AVION,
    MINA,
    SOLDADO
};

struct Contenido {
    int jugador;
    int numSoldado;
    int municionDelBarco;
    Artilleria artillerias;
    int turnosInactivo = 0;
};

class Casillero {
private:



    Terreno casilla;
    Artilleria artilleria;
    Contenido* contenido;

public:
    Casillero();
    ~Casillero();

    /*Pre: ~~
    Pos: cambia el terreno de la casilla
    */
    void cambiarTerreno(int terreno);

    /*Pre: ~~
    Pos: Desactiva la casilla por tantos turnos diga cantidadTurnosCasillaInactiva (sobreescribe turnosInactivo)
    */
    void desactivarCasilla(int cantidadTurnosCasillaInactiva);


    /*Pre: turnosInactivo debe ser mayor a 0
    Pos: Disminuye en 1 el turno de la casilla
    */
    void disminuirTurnosInactivo();

    /*Pre: ~~
    Pos: Devuelve la cantidad de turnos inactivo del casilleros
    */
    int getTurnosInactivo();

    void ponerArtilleria(Artilleria artilleria);

    /*Pre: recibe numero jugador y tipo de artilleria
    Pos: pone dicha artilleria en la casilla
    */
    void ponerArtilleria(Artilleria artilleria, int numJugador);


    /*Pre: Recibe el tipo de artilleria que se quiere colocar
    Pos: Devuelve true si se puede colocar o false y cout si no se puede
    */
    bool comprobarTerreno(Artilleria unidad);


    /*Pre: 
    Pos: Devuelve el tipo de artilleria en terreno
    */
    Artilleria devolverArtilleria();

    /*Pre: 
    Pos: Devuelve , en caso de que haya una artilleria , a que jugador pertenece
    */
    int devolverNroJugador();

    /*Pre: 
    Pos: Devuelve , en caso de que haya un soldado , que numero de soldado es
    */
    int devolverNroSoldado();

};



#endif