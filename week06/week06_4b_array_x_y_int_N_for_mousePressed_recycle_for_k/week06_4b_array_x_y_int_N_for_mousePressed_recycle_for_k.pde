//week06_4b_array_x_y_int_N_for_mousePressed_recycle_for_k
void setup(){
  size(600, 400);
}
float [] x = new float[100];
float [] y = new float[100];//java陣列宣告
int N=0;
void draw(){
  background( #C0FFEE );
  for(int i=0; i<N; i++){
        ellipse(x[i], y[i], 8, 8);
        y[i] += 2;
        if(y[i]>400){//飼料掉到外面
          for(int k=i;k<N-1;k++){//要回收
            x[k]=x[k+1];
            y[k]=y[k+1];
        }
        N--;//回收完1顆飼料
  }
   println(N);//把N在小黑印出來
 }
}
void mousePressed(){ 
  x[N]=mouseX;
  y[N]=mouseY;
  N++;//增加1顆飼料
}
