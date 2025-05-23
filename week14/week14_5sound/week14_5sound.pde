//week14_5sound
import processing.sound.*;
SoundFile music;
void setup() {
  size(640, 360);
  music=new SoundFile(this,"In Game Musivc.mp3");
  music.play();
}

void draw(){
}
