/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ScreenReaderCore/SCRCMathArrayExpression.h>

@interface SCRCMathRowExpression : SCRCMathArrayExpression
-(BOOL)isNumber;
-(int)integerValue;
-(id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2 ;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned)arg1 treePosition:(id)arg2 ;
-(id)latexDescriptionInMathMode:(BOOL)arg1 ;
-(unsigned)fractionLevel;
-(id)speakableSummary;
-(BOOL)canBeUsedWithRange;
-(BOOL)canBeUsedWithBase;
-(BOOL)isInteger;
-(BOOL)isFunctionName;
-(BOOL)isWordOrAbbreviation;
-(BOOL)beginsWithSpace;
-(BOOL)endsWithSpace;
-(id)childSpeakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned)arg2 parentTreePosition:(id)arg3 childIndex:(unsigned*)arg4 ;
-(id)_indexesOfCharactersInWords;
-(void)_addSpacingAndChild:(id)arg1 toResult:(id)arg2 nextChild:(id)arg3 previousChild:(id)arg4 numberOfOuterRadicals:(unsigned)arg5 treePosition:(id)arg6 ;
-(id)mathMLTag;
@end
