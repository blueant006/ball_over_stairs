

Procedure:
1)Static part 2)Dynamic part

1)Static part
First there is static part, which does not change with every frame. The blocks which
are drawn one over one are the static part. They are drawn with GL_POLYGON function 
with mentioned colours.

2)Dynamic part
In this part we animate the circle over steps like bouncing.
Drawing a circle involves taking 360 sample points around center and rendering them.
Then after displaying everyframe we clear the screen and update center of the circle.
The in the next iteration we see circle in updated position.
POsition are calulated with the help of if else clauses after every iteration over global variables.
Continous repetition of above procedure will result in animation.
For redisplaying glutPostRedisplay() function is used.

To compile code: 
g++ ballOverStairs.cpp -lGL -lGLU -lglut
And after that
./a.out
