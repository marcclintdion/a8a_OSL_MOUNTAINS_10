   glBindBuffer(GL_ARRAY_BUFFER, frontLeftFoot_VBO);                                                                                                                                
    //---------------------------------------------------------------------------------------------------------------------------------------------------|__MODEL             
    LoadIdentity(modelView);                                                                                                                                                  
    Translate(modelView, frontLeftUpperLeg_POSITION[0] + frontLeftLowerLeg_POSITION[0] + frontLeftFoot_POSITION[0],  frontLeftUpperLeg_POSITION[1] + frontLeftLowerLeg_POSITION[1] + frontLeftFoot_POSITION[1],  frontLeftUpperLeg_POSITION[2] + frontLeftLowerLeg_POSITION[2] + frontLeftFoot_POSITION[2]);                                                                                         
    Rotate(modelView, frontLeftFoot_ROTATE[0], frontLeftFoot_ROTATE[1], frontLeftFoot_ROTATE[2], frontLeftFoot_ROTATE[3]);//--MODEL                                                                       
    MultiplyMatrix(mvpMatrix, projection, modelView);                                                                                                                         
    //---------------------------------------------------------------------------------------------------------------------------------------------------|__LIGHT             
 #include "../horse_LIGHTWAVE_Render.cpp" 
    //======================================================================================================                                                                  
    glActiveTexture ( GL_TEXTURE1 );                                                                                                                                          
    glBindTexture(GL_TEXTURE_2D, frontLeftLeg_NORMALMAP);                                                                                                                          
    //---                                                                                                                                                                     
    glActiveTexture (GL_TEXTURE0);                                                                                                                                            
    glBindTexture(GL_TEXTURE_2D, frontLeftLeg_TEXTUREMAP);                                                                                                                            
    //---------------------------------------------------------------------------------------------------------------------------------------------------|__DRAW              
    glDrawArrays(GL_TRIANGLES, 0, 318);                                                                                                     

