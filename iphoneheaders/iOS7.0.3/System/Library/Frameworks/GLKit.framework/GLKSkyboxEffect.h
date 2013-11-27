/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GLKit/GLKNamedEffect.h>

@class GLKEffectPropertyTexture, GLKEffectPropertyTransform, NSString, NSMutableArray, GLKEffect;

@interface GLKSkyboxEffect : NSObject <GLKNamedEffect> {

	GLKVector3 _center;
	float _xSize;
	float _ySize;
	float _zSize;
	GLKEffectPropertyTexture* _textureCubeMap;
	GLKEffectPropertyTransform* _transform;
	NSString* _label;
	unsigned char _effectStale;
	unsigned char _centerChanged;
	unsigned _vao;
	unsigned _positionVBO;
	unsigned _texCoordVBO;
	NSMutableArray* _propertyArray;
	GLKEffect* _effect;
	unsigned _programName;

}

@property (assign,nonatomic) GLKVector3 center;                                        //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) float xSize;                                              //@synthesize xSize=_xSize - In the implementation block
@property (assign,nonatomic) float ySize;                                              //@synthesize ySize=_ySize - In the implementation block
@property (assign,nonatomic) float zSize;                                              //@synthesize zSize=_zSize - In the implementation block
@property (nonatomic,readonly) GLKEffectPropertyTexture * textureCubeMap;              //@synthesize textureCubeMap=_textureCubeMap - In the implementation block
@property (nonatomic,readonly) GLKEffectPropertyTransform * transform;                 //@synthesize transform=_transform - In the implementation block
@property (nonatomic,copy) NSString * label;                                           //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSMutableArray * propertyArray;                         //@synthesize propertyArray=_propertyArray - In the implementation block
@property (assign,nonatomic) unsigned char effectStale;                                //@synthesize effectStale=_effectStale - In the implementation block
@property (assign,nonatomic) unsigned char centerChanged;                              //@synthesize centerChanged=_centerChanged - In the implementation block
@property (assign,nonatomic) GLKEffect * effect;                                       //@synthesize effect=_effect - In the implementation block
@property (assign,nonatomic) unsigned programName;                                     //@synthesize programName=_programName - In the implementation block
@property (assign,nonatomic) unsigned vao;                                             //@synthesize vao=_vao - In the implementation block
@property (assign,nonatomic) unsigned positionVBO;                                     //@synthesize positionVBO=_positionVBO - In the implementation block
@property (assign,nonatomic) unsigned texCoordVBO;                                     //@synthesize texCoordVBO=_texCoordVBO - In the implementation block
-(void)prepareToDraw;
-(id)propertyArray;
-(unsigned char)effectStale;
-(void)setEffectStale:(unsigned char)arg1 ;
-(unsigned)programName;
-(void)setProgramName:(unsigned)arg1 ;
-(void)createAndBindVAOWithPositions:(float*)arg1 texCoords:(float*)arg2 ;
-(void)updateSkyboxEffect;
-(id)textureCubeMap;
-(void)setXSize:(float)arg1 ;
-(void)setYSize:(float)arg1 ;
-(void)setZSize:(float)arg1 ;
-(float)xSize;
-(float)ySize;
-(float)zSize;
-(unsigned)vao;
-(void)setVao:(unsigned)arg1 ;
-(unsigned)positionVBO;
-(void)setPositionVBO:(unsigned)arg1 ;
-(unsigned)texCoordVBO;
-(void)setTexCoordVBO:(unsigned)arg1 ;
-(unsigned char)centerChanged;
-(void)setCenterChanged:(unsigned char)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(_GLKVector3)center;
-(id)transform;
-(void)setCenter:(_GLKVector3)arg1 ;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(void)draw;
-(void)setEffect:(id)arg1 ;
-(id)effect;
@end
