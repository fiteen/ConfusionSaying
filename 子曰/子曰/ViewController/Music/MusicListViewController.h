//
//  MusicListViewController.h
//  子曰
//
//  Created by Martell on 15/11/28.
//  Copyright © 2015年 Martell. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MusicListViewController : UIViewController
- (instancetype)initWithAlbumId:(NSInteger)albumId;
@property (nonatomic, assign) NSInteger albumId;
@end
