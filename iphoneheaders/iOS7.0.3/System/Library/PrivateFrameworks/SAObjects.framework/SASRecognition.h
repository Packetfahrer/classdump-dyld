/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:35:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray;

@interface SASRecognition : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * phrases; 
+(id)recognition;
+(id)recognitionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)af_speechPhrases;
-(id)groupIdentifier;
-(id)encodedClassName;
-(id)phrases;
-(void)setPhrases:(id)arg1 ;
@end
