/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSNumber, NSArray, NSURL, NSString;

@interface SAAlarmSearch : SADomainCommand

@property (nonatomic,copy) NSNumber * enabled; 
@property (nonatomic,copy) NSArray * frequency; 
@property (nonatomic,copy) NSNumber * hour; 
@property (nonatomic,copy) NSURL * identifier; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSNumber * minute; 
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)search;
-(id)groupIdentifier;
-(void)setEnabled:(id)arg1 ;
-(id)identifier;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(id)frequency;
-(void)setFrequency:(id)arg1 ;
-(void)setHour:(id)arg1 ;
-(id)hour;
-(id)minute;
-(void)setIdentifier:(id)arg1 ;
-(id)enabled;
-(void)setMinute:(id)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end
