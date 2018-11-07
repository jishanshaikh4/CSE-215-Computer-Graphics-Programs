// DDA Line generation algorithm implementation in c

#include <stdio.h> 
#include <graphics.h> 
  
int abs (int n){ 
    return ((n>0) ? n : ( n * (-1))); 
} 
   
void DDA(int X0, int Y0, int X1, int Y1){ 
    int dx = X1 - X0; 
    int dy = Y1 - Y0; 
   
    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy); 
  
    float Xinc = dx / (float) steps; 
    float Yinc = dy / (float) steps; 
  
    float X = X0; 
    float Y = Y0; 
    for (int i = 0; i <= steps; i++){ 
        putpixel (X,Y,RED);  
        X += Xinc;          
        Y += Yinc;          
        delay(300);         
    } 
} 
  

int main(){ 
    int gd = DETECT, gm;  
    initgraph (&gd, &gm, "");    
    
    int t;
    scanf("%d", &t);
  
    while(t--){
      int x0, x1, y0, y2;
      scanf("%d%d%d%d", &x0, &x1, &y0, &y1);
      DDA(x0, y0, x1, y1);
    }
    return 0; 
}  
