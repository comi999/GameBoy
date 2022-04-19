#include <stdint.h>
#include <stdio.h>
#include <gb/gb.h>
#include <gb/drawing.h>
#include <float.h>

// struct Vector4 { float x, y, z, w; };

// Vector4 Mesh_Cube[ 8 ] = {
// 		{  0.5f,  0.5f, -0.5f, 1.0f },
// 		{ -0.5f,  0.5f, -0.5f, 1.0f },
// 		{ -0.5f, -0.5f, -0.5f, 1.0f },
// 		{  0.5f, -0.5f, -0.5f, 1.0f },
// 		{  0.5f,  0.5f,  0.5f, 1.0f },
// 		{ -0.5f,  0.5f,  0.5f, 1.0f },
// 		{ -0.5f, -0.5f,  0.5f, 1.0f },
// 		{  0.5f, -0.5f,  0.5f, 1.0f },
// 	};

// struct Matrix4 { float 
//         x0, x1, x2, x3,
//         y0, y1, y2, y3,
//         z0, z1, z2, z3,
//         w0, w1, w2, w3; };

// void Multiply_Matrix_Vector( const Matrix4* a_Matrix, const Vector4* a_Vector, Vector4* o_Result )
// {
//     ( *o_Result ).x = ( *a_Matrix ).x0 * ( *a_Vector ).x + ( *a_Matrix ).x1 * ( *a_Vector ).y + ( *a_Matrix ).x2 * ( *a_Vector ).z + ( *a_Matrix ).x3 * ( *a_Vector ).w;
//     ( *o_Result ).y = ( *a_Matrix ).y0 * ( *a_Vector ).x + ( *a_Matrix ).y1 * ( *a_Vector ).y + ( *a_Matrix ).y2 * ( *a_Vector ).z + ( *a_Matrix ).y3 * ( *a_Vector ).w;
//     ( *o_Result ).z = ( *a_Matrix ).z0 * ( *a_Vector ).x + ( *a_Matrix ).z1 * ( *a_Vector ).y + ( *a_Matrix ).z2 * ( *a_Vector ).z + ( *a_Matrix ).z3 * ( *a_Vector ).w;
//     ( *o_Result ).w = ( *a_Matrix ).w0 * ( *a_Vector ).x + ( *a_Matrix ).w1 * ( *a_Vector ).y + ( *a_Matrix ).w2 * ( *a_Vector ).z + ( *a_Matrix ).w3 * ( *a_Vector ).w;
// }

// void Create_Scale( Vector4 a_Scale, Matrix4* o_Matrix )
// {
//     ( *o_Matrix ).x0 = a_Scale.x;
//     ( *o_Matrix ).x0 = 0;
//     ( *o_Matrix ).x0 = 0;
//     ( *o_Matrix ).x0 = 0;

//     ( *o_Matrix ).x0 = 0;
//     ( *o_Matrix ).x0 = a_Scale.y;
//     ( *o_Matrix ).x0 = 0;
//     ( *o_Matrix ).x0 = 0;

//     ( *o_Matrix ).x0 = 0;
//     ( *o_Matrix ).x0 = 0;
//     ( *o_Matrix ).x0 = a_Scale.z;
//     ( *o_Matrix ).x0 = 0;

//     ( *o_Matrix ).x0 = 0;
//     ( *o_Matrix ).x0 = 0;
//     ( *o_Matrix ).x0 = 0;
//     ( *o_Matrix ).x0 = a_Scale.w;
// }

// void Create_RotationY( float a_Radians, Matrix4* o_Matrix )
// {
//     float c = cosf( a_Radians );
//     float s = sinf( a_Radians );
    
//     ( *o_Matrix ).x0 = c;
//     ( *o_Matrix ).x1 = 0;
//     ( *o_Matrix ).x2 = s;
//     ( *o_Matrix ).x3 = 0;

//     ( *o_Matrix ).y0 = 0;
//     ( *o_Matrix ).y1 = 1;
//     ( *o_Matrix ).y2 = 0;
//     ( *o_Matrix ).y3 = 0;

//     ( *o_Matrix ).z0 = -s;
//     ( *o_Matrix ).z1 = 0;
//     ( *o_Matrix ).z2 = c;
//     ( *o_Matrix ).z3 = 0;

//     ( *o_Matrix ).w0 = 0;
//     ( *o_Matrix ).w1 = 0;
//     ( *o_Matrix ).w2 = 0;
//     ( *o_Matrix ).w3 = 1;
// }

void init_gfx() {
    // Load Background tiles and then map

	// Turn the background map on to make it visible
    SHOW_BKG;
}

void main(void)
{
    //float Rotation;
    //struct Matrix4 RotationMatrix;

	init_gfx();

    // Loop forever
    while(1) {
        
		// Game main loop processing goes here
        //Rotation = 0.0f;

        //Create_RotationY( Rotation, &RotationMatrix );

		// Done processing, yield CPU and wait for start of next frame
        wait_vbl_done();
    }
}
