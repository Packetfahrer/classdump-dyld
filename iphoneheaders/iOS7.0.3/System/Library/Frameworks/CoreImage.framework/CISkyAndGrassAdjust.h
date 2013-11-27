/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:31:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CISkyAndGrassAdjust : CIFilter {

	CIImage* inputImage;
	NSNumber* inputSkyAmount;
	NSNumber* inputGrassAmount;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputSkyAmount; 
@property (nonatomic,retain) NSNumber * inputGrassAmount; 
+(id)customAttributes;
-(void)setDefaults;
-(id)outputImage;
-(id)inputImage;
-(void)setInputImage:(id)arg1 ;
-(id)_kernel;
-(void)setInputSkyAmount:(id)arg1 ;
-(void)setInputGrassAmount:(id)arg1 ;
-(id)inputSkyAmount;
-(id)inputGrassAmount;
@end
