/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:33:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class UIImage, NSArray;

@interface CKAnimatedImage : NSObject {

	UIImage* _image;
	NSArray* _durations;

}

@property (nonatomic,retain) UIImage * image;                //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSArray * durations;              //@synthesize durations=_durations - In the implementation block
+(id)animatedImageWithContentsOfCPBitmapURL:(id)arg1 ;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(id)description;
-(id)image;
-(id)frames;
-(id)initWithImages:(id)arg1 durations:(id)arg2 ;
-(BOOL)writeToCPBitmapURL:(id)arg1 ;
-(id)durations;
-(id)_initWithImage:(id)arg1 durations:(id)arg2 ;
-(void)setDurations:(id)arg1 ;
@end
