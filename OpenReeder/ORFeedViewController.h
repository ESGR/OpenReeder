//
//  ORFeedViewController.h
//  OpenReeder
//
//  Created by JOSE VEGA on 04/10/13.
//  Copyright (c) 2013 JOSE VEGA. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TTRSSModel.h"

@interface ORFeedViewController : UITableViewController

@property (nonatomic,copy)NSString *sessionID;
@property (nonatomic) NSInteger categoryID;
@property (nonatomic,strong) TTRSSModel *myModel;
@property (nonatomic,strong) NSArray *myfeeds;

-(id)initWithStyle:(UITableViewStyle)style
        categoryID:(NSInteger)aCatID
         sessionID:(NSString *)aSessionID;

@end
