/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VGLTextureWithAlphaProgram.h>

@interface VGLTextureWithRGBColorMasksProgram : VGLTextureWithAlphaProgram {

	int _uRColor;
	VGLColor _rColor;
	int _uGColor;
	VGLColor _gColor;
	int _uBColor;
	VGLColor _bColor;

}

@property (assign,nonatomic) VGLColor rColor;              //@synthesize rColor=_rColor - In the implementation block
@property (assign,nonatomic) VGLColor gColor;              //@synthesize gColor=_gColor - In the implementation block
@property (assign,nonatomic) VGLColor bColor;              //@synthesize bColor=_bColor - In the implementation block
+(id)fragName;
-(id).cxx_construct;
-(void)setup;
-(void)setRColor:(VGLColor)arg1 ;
-(void)setGColor:(VGLColor)arg1 ;
-(void)setBColor:(VGLColor)arg1 ;
-(VGLColor)rColor;
-(VGLColor)gColor;
-(VGLColor)bColor;
@end
