/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class GEOStep, GEORoute, GEODirectionsResponse;

@interface RealStepProgressionItem : NSObject {

	GEOStep* _step;
	GEORoute* _route;
	GEODirectionsResponse* _response;

}

@property (nonatomic,retain) GEOStep * step;                                //@synthesize step=_step - In the implementation block
@property (nonatomic,retain) GEORoute * route;                              //@synthesize route=_route - In the implementation block
@property (nonatomic,retain) GEODirectionsResponse * response;              //@synthesize response=_response - In the implementation block
-(id)initWithStep:(id)arg1 fromRoute:(id)arg2 response:(id)arg3 ;
-(void)setResponse:(id)arg1 ;
-(void)dealloc;
-(id)response;
-(void)setRoute:(id)arg1 ;
-(id)route;
-(id)step;
-(void)setStep:(id)arg1 ;
@end
