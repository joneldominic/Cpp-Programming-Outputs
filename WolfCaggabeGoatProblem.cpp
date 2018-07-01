#include <iostream>
using namespace std;


main()
{class

{

    enum Side
    {
        EAST { public Side getOpposite()
                { return WEST; }
             };
        WEST {public Side getOpposite()
                { return EAST; }
             };
        abstract public Side getOpposite();
    }
    private Side farmer = Side.EAST;
    private Side wolf = Side.EAST;
    private Side goat = Side.EAST;
    private Side cabbage = Side.EAST;

    /**
     * Constructs a new default state with everyone on the east side.
     */
        public FarmerWolfGoatState()
    {}

    /**
     * Construct a move state from the parent state.
     */
    public FarmerWolfGoatState(FarmerWolfGoatState parent,
            Side farmer, Side wolf, Side goat, Side cabbage)
    {
        super(parent);
        this.farmer = farmer;
        this.wolf = wolf;
        this.goat = goat;
        this.cabbage = cabbage;
    }

    public boolean isSolution()
    {
        return farmer == Side.WEST &&
        wolf == Side.WEST &&
        goat == Side.WEST &&
        cabbage == Side.WEST;
    }

    public boolean equals(Object o)
    {
        if (o == null || !(o instanceof FarmerWolfGoatState))
            return false;

        FarmerWolfGoatState fwgs = (FarmerWolfGoatState)o;
        return farmer == fwgs.farmer &&
            wolf == fwgs.wolf &&
            cabbage == fwgs.cabbage &&
            goat == fwgs.goat;
    }

    /**
     * additional methods
     */
    public static void getPosition(Object o)
    {
        FarmerWolfGoatState fwgs = (FarmerWolfGoatState)o;

        if(fwgs.farmer == Side.EAST)
            System.out.println("Farmer is EAST");
        else
            System.out.println("Farmer is WEST");

        if(fwgs.wolf == Side.EAST)
            System.out.println("Wolf is EAST");
        else
            System.out.println("Wolf is WEST");

        if(fwgs.goat == Side.EAST)
            System.out.println("Farmer is EAST");
        else
            System.out.println("Goat is WEST");

        if(fwgs.cabbage == Side.EAST)
            System.out.println("Cabbage is EAST");
        else
            System.out.println("Cabbage is WEST");
    }

    Override
    public double getHeuristic()
     {
        // TODO Auto-generated method stub
        return 0;
     }

    Override
    public Iterable<AState> getPossibleMoves()
    {
        // TODO Auto-generated method stub
        return null;
    }

}
}
