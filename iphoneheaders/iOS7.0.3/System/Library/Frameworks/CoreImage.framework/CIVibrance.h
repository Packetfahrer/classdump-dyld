/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:30:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreImage/CIFilter.h>
#import <CoreImage/_CIFilterProperties.h>

@class CIImage, NSNumber;

@interface CIVibrance : CIFilter <_CIFilterProperties> {

	CIImage* inputImage;
	NSNumber* inputAmount;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputAmount; 
+(id)customAttributes;
-(void)setDefaults;
-(id)outputImage;
-(BOOL)_isIdentity;
-(id)inputImage;
-(void)setInputImage:(id)arg1 ;
-(void)setInputAmount:(id)arg1 ;
-(id)_kernelNeg;
-(id)_kernelPos;
-(id)inputAmount;
-(id)_outputProperties;
-(id)_initFromProperties:(id)arg1 ;
@end
