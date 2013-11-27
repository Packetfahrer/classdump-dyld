/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:45:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SportsVoices/GrammarPart.h>

@class SlotsInContext, NewProduction;

@interface Rule : GrammarPart {

	SlotsInContext* _leftHandSide;
	NewProduction* _rightHandSide;
	BOOL _repeat;

}
+(id)instanceFromPlist:(id)arg1 ;
+(id)ruleWithLeftHandSide:(id)arg1 rightHandSide:(id)arg2 ;
+(id)test;
-(id)initFromPlist:(id)arg1 ;
-(id)appliedTo:(id)arg1 ;
-(id)initWithLeftHandSide:(id)arg1 rightHandSide:(id)arg2 ;
-(id)initWithLeftHandSide:(id)arg1 rightHandSideOverlays:(id)arg2 rightHandSideBaseIndices:(id)arg3 ;
-(void)dealloc;
-(id)description;
@end
