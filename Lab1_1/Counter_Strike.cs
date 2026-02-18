namespace Lab1_1
{
    class Counter_Strike
    {
         private double x1, y1, x2, y2;
         
         public Counter_Strike(double x1, double y1, double x2, double y2) 
         {
             this.x1 = x1;
             this.y1 = y1;
             this.x2 = x2;
             this.y2 = y2;
         }
         public double X1 => x1;
         public double Y1 => y1;
         public double X2 => x2;
         public double Y2 => y2;

        public double GetLength() 
        {
            double dx = x2 - x1;
            double dy = y2 - y1;

            double length = Math.Sqrt(dx * dx + dy * dy);
            return length;
        }

        public double GetAngleWithOY()
        {
            double length = GetLength();
            if (length == 0)
                return 0;

            double dy = y2 - y1;
            double angle = Math.Acos(dy / length);
            double angle_in_degrees = angle * (180.0 / Math.PI);
            return angle_in_degrees;
        }


    }
}