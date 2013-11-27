/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotosUI/PUValueFilter.h>

@interface PUChangeDirectionValueFilter : PUValueFilter {

	double _threshold;
	double _minimumChangeValue;

}

@property (assign,nonatomic) double minimumChangeValue;              //@synthesize minimumChangeValue=_minimumChangeValue - In the implementation block
-(double)updatedValue:(double)arg1 withTargetValue:(double)arg2 ;
-(double)minimumChangeValue;
-(void)setMinimumChangeValue:(double)arg1 ;
@end
