/*
 * HMC6352.h
 * 
 * Copyright (c) 2009 Ruben Laguna <ruben.laguna at gmail.com>. All rights reserved.
 * 
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
 
#ifndef HMC6352_H
#define HMC6352_H

class HMC6352
{
  public:
    float getHeading();
    int getHeadingInt();
    void wakeUp();
    void sleep();
    void prepareReading();
  private:
    unsigned long preparedReading;
  
};

#endif
