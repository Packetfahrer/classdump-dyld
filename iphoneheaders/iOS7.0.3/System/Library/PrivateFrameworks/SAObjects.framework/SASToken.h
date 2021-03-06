/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SASToken : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * confidenceScore; 
@property (nonatomic,copy) NSNumber * endTime; 
@property (assign,nonatomic) BOOL removeSpaceAfter; 
@property (assign,nonatomic) BOOL removeSpaceBefore; 
@property (nonatomic,copy) NSNumber * startTime; 
@property (nonatomic,copy) NSString * text; 
+(id)token;
+(id)tokenWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setStartTime:(id)arg1 ;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)startTime;
-(BOOL)removeSpaceBefore;
-(BOOL)removeSpaceAfter;
-(void)setEndTime:(id)arg1 ;
-(id)encodedClassName;
-(id)confidenceScore;
-(void)setConfidenceScore:(id)arg1 ;
-(void)setRemoveSpaceAfter:(BOOL)arg1 ;
-(void)setRemoveSpaceBefore:(BOOL)arg1 ;
-(id)endTime;
@end

