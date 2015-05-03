GLfloat room_POSITION[]             = { 0.000000f, 0.000000f, 0.000000f, 1.0 }; 
GLfloat room_ROTATION[]             = { 0.000000f, 0.000000f, 1.000000f, 0.000000f }; 
GLfloat room_SCALE[]                = { 1.000000f, 1.000000f, 1.000000f, 1.0 }; 
//----------------------------------------------------------------- 
GLfloat room_LIGHT_POSITION_01[]    = { 2.0, 15.0, 30.0, 1.0 }; 
GLfloat room_SHININESS              = 80.0; 
GLfloat room_ATTENUATION            =  1.0; 
//----------------------------------------------------------------- 
GLuint room_VBO; 
GLuint room_INDICES_IBO; 
//----------------------------------------------------------------- 
GLuint room_NORMALMAP; 

GLuint room_COLORMAP; 
GLuint room_MASK0MAP; 

//----------------------------------------------------------------- 
GLfloat room_boundingBox[6]; 
