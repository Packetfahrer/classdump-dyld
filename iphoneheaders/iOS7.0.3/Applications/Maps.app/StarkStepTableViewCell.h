/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/StarkTableViewCell.h>

@class NSArray;

@interface StarkStepTableViewCell : StarkTableViewCell {

	NSArray* _instructionsAlternatives;

}

@property (nonatomic,copy) NSArray * instructionsAlternatives;              //@synthesize instructionsAlternatives=_instructionsAlternatives - In the implementation block
+(Class)layoutClass;
-(void)setInstructionsAlternatives:(id)arg1 ;
-(void)setInstructions:(id)arg1 alternatives:(id)arg2 ;
-(id)instructionsAlternatives;
-(void)layoutSubviews;
@end
