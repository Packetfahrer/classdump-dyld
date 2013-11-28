/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, SAMovieV2MovieDetailSnippet, NSString, NSNumber, NSDate;

@interface SAMovieV2MovieListCell : SADomainObject

@property (nonatomic,copy) NSArray * displayableShowtimes; 
@property (nonatomic,retain) SAMovieV2MovieDetailSnippet * movieDetailSnippet; 
@property (nonatomic,copy) NSString * movieName; 
@property (nonatomic,copy) NSArray * posterImages; 
@property (nonatomic,copy) NSNumber * qualityRating; 
@property (nonatomic,copy) NSString * rating; 
@property (nonatomic,copy) NSDate * theatricalReleaseDate; 
+(id)movieListCell;
+(id)movieListCellWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setRating:(id)arg1 ;
-(id)rating;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(id)displayableShowtimes;
-(void)setDisplayableShowtimes:(id)arg1 ;
-(id)movieDetailSnippet;
-(void)setMovieDetailSnippet:(id)arg1 ;
-(id)movieName;
-(void)setMovieName:(id)arg1 ;
-(id)posterImages;
-(void)setPosterImages:(id)arg1 ;
-(id)qualityRating;
-(void)setQualityRating:(id)arg1 ;
-(id)theatricalReleaseDate;
-(void)setTheatricalReleaseDate:(id)arg1 ;
@end
