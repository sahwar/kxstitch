/***************************************************************************
 *   Copyright (C) 2009 by Stephen Allewell                                *
 *   stephen@mirramar.fsnet.co.uk                                          *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 ***************************************************************************/


#ifndef __KeycodeLineEdit_H
#define __KeycodeLineEdit_H


#include <QLineEdit>
#include <QString>


class QKeyEvent;


class KeycodeLineEdit : public QLineEdit
{
	Q_OBJECT

	public:
		KeycodeLineEdit(QWidget *parent);

		int key();
		Qt::KeyboardModifiers modifiers();
		void setKeyModifiers(int key, Qt::KeyboardModifiers modifiers);
		static QString keyString(int qtKey, Qt::KeyboardModifiers modifiers);

	protected:
		virtual void keyPressEvent(QKeyEvent *e);

	private:
		static QString findQtText(int qtKey);
		int m_key;
		Qt::KeyboardModifiers m_modifiers;
};


#endif