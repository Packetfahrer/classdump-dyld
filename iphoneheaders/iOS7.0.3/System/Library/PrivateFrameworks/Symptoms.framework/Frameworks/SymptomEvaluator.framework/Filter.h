/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface Filter : NSObject {

	int _subsystemId;
	unsigned _symptomId;
	int _queueLenAlert;
	int _queueLenDrop;
	int _queueTimeLimit;

}

@property (assign,nonatomic) int subsystemId;                 //@synthesize subsystemId=_subsystemId - In the implementation block
@property (assign,nonatomic) unsigned symptomId;              //@synthesize symptomId=_symptomId - In the implementation block
@property (assign,nonatomic) int queueLenAlert;               //@synthesize queueLenAlert=_queueLenAlert - In the implementation block
@property (assign,nonatomic) int queueLenDrop;                //@synthesize queueLenDrop=_queueLenDrop - In the implementation block
@property (assign,nonatomic) int queueTimeLimit;              //@synthesize queueTimeLimit=_queueTimeLimit - In the implementation block
+(id)initForSymptom:(unsigned)arg1 withParams:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(int)subsystemId;
-(unsigned)symptomId;
-(int)queueLenAlert;
-(int)queueLenDrop;
-(int)queueTimeLimit;
-(void)setSubsystemId:(int)arg1 ;
-(void)setSymptomId:(unsigned)arg1 ;
-(void)setQueueLenAlert:(int)arg1 ;
-(void)setQueueLenDrop:(int)arg1 ;
-(void)setQueueTimeLimit:(int)arg1 ;
@end
