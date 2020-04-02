import {Request, Response} from 'express'
import EmailService from '../services/EmailService'

const users = [
	{name: 'Allan', email: 'allan.p@pti.org.br'},
]

export default {
	async index(req: Request, res: Response){
		return res.json(users)
	},

	async create(req: Request, res: Response) {
		const emailService = new EmailService()

		emailService.sendMail({
			to:{
				name:'allan', 
				email:'aaaa'
			},
			message:{
				body:'aaaa', 
				subject:'aaa'
			}
		})

		return res.send()
	}
}