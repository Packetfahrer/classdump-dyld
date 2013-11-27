/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:45:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/teslad
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <teslad/MCTeslaValidationRule.h>

@interface MCTeslaBooleanValidationRule : MCTeslaValidationRule {

	BOOL _requiresNegation;

}

@property (assign) BOOL requiresNegation;              //@synthesize requiresNegation=_requiresNegation - In the implementation block
+(id)ruleForDstKey:(id)arg1 srcKey:(id)arg2 group:(id)arg3 isRequired:(BOOL)arg4 requiresNegation:(BOOL)arg5 ;
-(BOOL)applyRuleToCloudConfiguration:(id)arg1 withResultDictionary:(id)arg2 ;
-(void)setRequiresNegation:(BOOL)arg1 ;
-(BOOL)requiresNegation;
@end
