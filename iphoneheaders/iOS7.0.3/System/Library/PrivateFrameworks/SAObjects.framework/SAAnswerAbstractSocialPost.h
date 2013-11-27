/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 1:36:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSArray, NSDate, NSURL;

@interface SAAnswerAbstractSocialPost : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * author; 
@property (nonatomic,copy) NSString * authorTitle; 
@property (nonatomic,copy) NSArray * comments; 
@property (nonatomic,copy) NSDate * dateCreated; 
@property (nonatomic,copy) NSDate * dateModified; 
@property (nonatomic,copy) NSURL * icon; 
@property (assign,nonatomic) int rank; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSString * title; 
+(id)abstractSocialPost;
+(id)abstractSocialPostWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setTitle:(id)arg1 ;
-(id)text;
-(id)title;
-(void)setText:(id)arg1 ;
-(void)setIcon:(id)arg1 ;
-(id)dateModified;
-(int)rank;
-(void)setRank:(int)arg1 ;
-(void)setAuthor:(id)arg1 ;
-(void)setComments:(id)arg1 ;
-(id)author;
-(id)comments;
-(void)setDateCreated:(id)arg1 ;
-(id)dateCreated;
-(id)encodedClassName;
-(id)authorTitle;
-(void)setAuthorTitle:(id)arg1 ;
-(void)setDateModified:(id)arg1 ;
-(id)icon;
@end
