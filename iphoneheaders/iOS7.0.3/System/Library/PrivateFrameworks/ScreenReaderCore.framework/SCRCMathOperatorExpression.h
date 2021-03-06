/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenReaderCore/SCRCMathSimpleExpression.h>

@interface SCRCMathOperatorExpression : SCRCMathSimpleExpression {

	unsigned short _operatorChar;

}

@property (nonatomic,readonly) unsigned short operatorChar;              //@synthesize operatorChar=_operatorChar - In the implementation block
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2 ;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned)arg1 treePosition:(id)arg2 ;
-(id)mathMLString;
-(BOOL)canBeUsedWithRange;
-(BOOL)isNaturalSuperscript;
-(BOOL)isEllipsis;
-(BOOL)isTermSeparator;
-(BOOL)isOperationSymbol;
-(BOOL)isFenceDelimiter;
-(id)latexFormatStringAsOver;
-(BOOL)_isIntegral;
-(BOOL)_isUnionOrIntersection;
-(BOOL)_isSummation;
-(BOOL)_isRingOperator;
-(BOOL)_isInvisibleCharacter;
-(BOOL)_isMinusSign;
-(unsigned short)operatorChar;
@end

