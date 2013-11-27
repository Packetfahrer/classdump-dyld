/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SymptomAdditionalProtocol;
@class NSString, ;

@interface SimpleRuleCondition : NSObject {

	int _conditionType;
	int _conditionPrevSymptom;
	int _conditionMaxAge;
	int _conditionFlags;
	int _conditionMinCount;
	NSString* _conditionStringID;
	int _conditionStringLength;
	<SymptomAdditionalProtocol>* _additionalHandler;
	SEL _additionalSelector;

}

@property (assign,nonatomic) int conditionType;                                            //@synthesize conditionType=_conditionType - In the implementation block
@property (assign,nonatomic) int conditionPrevSymptom;                                     //@synthesize conditionPrevSymptom=_conditionPrevSymptom - In the implementation block
@property (assign,nonatomic) int conditionMaxAge;                                          //@synthesize conditionMaxAge=_conditionMaxAge - In the implementation block
@property (assign,nonatomic) int conditionFlags;                                           //@synthesize conditionFlags=_conditionFlags - In the implementation block
@property (assign,nonatomic) int conditionMinCount;                                        //@synthesize conditionMinCount=_conditionMinCount - In the implementation block
@property (nonatomic,retain) NSString * conditionStringID;                                 //@synthesize conditionStringID=_conditionStringID - In the implementation block
@property (assign,nonatomic) int conditionStringLength;                                    //@synthesize conditionStringLength=_conditionStringLength - In the implementation block
@property (nonatomic,retain) <SymptomAdditionalProtocol> * additionalHandler;              //@synthesize additionalHandler=_additionalHandler - In the implementation block
@property (assign,nonatomic) SEL additionalSelector;                                       //@synthesize additionalSelector=_additionalSelector - In the implementation block
-(id)description;
-(int)conditionType;
-(void)setConditionType:(int)arg1 ;
-(int)conditionPrevSymptom;
-(void)setConditionPrevSymptom:(int)arg1 ;
-(int)conditionMaxAge;
-(void)setConditionMaxAge:(int)arg1 ;
-(int)conditionFlags;
-(void)setConditionFlags:(int)arg1 ;
-(int)conditionMinCount;
-(void)setConditionMinCount:(int)arg1 ;
-(id)conditionStringID;
-(void)setConditionStringID:(id)arg1 ;
-(int)conditionStringLength;
-(void)setConditionStringLength:(int)arg1 ;
-(id)additionalHandler;
-(void)setAdditionalHandler:(id)arg1 ;
-(SEL)additionalSelector;
-(void)setAdditionalSelector:(SEL)arg1 ;
-(void).cxx_destruct;
@end
